# 1. Authentication & Authorization — MUST PREPARE

## What is the difference between authentication and authorization?
=> **Authentication means checking who the user is.**

For example, when the user login into the application, they provide username and password.

This username and password goes to the backend. In the backend, we validate these details with our database.

If the user details are correct, then we generate an **access token** using JWT. In Node.js/NestJS, we can use the JWT package to generate the token.

While generating the token, we can pass some user information like **user ID and role**, along with the secret key and expiry time.

After that, the access token is returned to the frontend, and the frontend uses this token for the next API requests.

So, this process of checking the user details and confirming that the user is a valid user is called **authentication**.

**Authorization means checking what the logged-in user is allowed to access.**

For example, in my application we have **Agent, Supervisor and Admin** users.

After login, based on the user's role, we check which routes or APIs the user can access.

For example:

* Agent → Agent-related functionality
* Supervisor → Supervisor-related functionality
* Admin → Admin-related functionality

We can implement this using **role-based access control (RBAC)**.

So simply:

**Authentication → Who are you?**

**Authorization → What can you access?**

## What is JWT and how does it work?
=> JWT means **JSON Web Token**. Basically, JWT is used in the login process for **authentication and authorization**.

When the user login into the application, we get some user details like **username, user ID, role and other important details**.

These details are passed to the JWT `sign()` function and a token is created.

While creating the token, we mainly use the **user details, secret key and expiry time**. After everything is correct, JWT token is generated and returned to the frontend.

After login, whenever the user sends any API request, the frontend sends this token with the request.

Backend receives this token and verifies the token. If the token is valid, then the user can access the API based on their **role and permission**.

So basically the flow is:

**User Login → Validate User → Generate JWT Token → Send Token to Frontend → Send Token with Every API Request → Verify Token → Allow Access.**

This is the basic use of JWT in the backend.

## Explain the complete JWT authentication flow in Angular + NestJS.
=> **In my application, the JWT authentication flow is like this:**

First, the user login from the **Angular application** by providing username and password.

These details are passed to the **Login API**.

From Angular, the request goes to **NGINX**. NGINX forwards the request to the **API Gateway**.

Then API Gateway forwards the request to the required **Write Service**.

In the Write Service, we validate the username and password with the database.

If the user details are correct, then we generate the **JWT access token** using the JWT `sign()` method. We pass the required user details, secret key and expiry time.

After the token is generated, the token is returned back to the Angular application.

After login, for the next protected API requests, we use the **Angular Interceptor** to add the JWT token in the Authorization header.

So the login flow is:

**Angular → NGINX → API Gateway → Write Service → Validate User → Generate JWT → Angular**

After login, the protected API flow is:

**Angular → Interceptor → NGINX → API Gateway → Service → JWT Validation → Role/Permission Check → Response**

## What are the parts of a JWT?
=> JWT has mainly three parts:

Header – In this we have information about the token type and algorithm which is used for signing the token.
Payload – In this we have the user-related information like user ID, username, role and other required details.
Signature – This is used to verify that the token is valid and it is not changed by anyone. It is created using the secret key and the header and payload.

So basically:
Header + Payload + Signature = JWT Token

For example: xxxxx.yyyyy.zzzzz

Here the first part is Header, second part is Payload, and third part is Signature.

## Where should you store the JWT on the frontend?
=> in my current application i used the localstorage for stored the access token

## What are the security risks of storing JWT in localStorage?
=> * Main security risk is that if an attacker gets the **token from localStorage**, they can use that access token to call the protected endpoints and access the application data.
* So, in my current application, we don't directly store the access token in localStorage.
* We use an **encryption mechanism** before storing the token in localStorage.
* Whenever we need the token, we decrypt it on the frontend and send it with the API request.
* This way, we have an additional layer of security for storing the token.

## What is the difference between access token and refresh token?
=> Access token expiry validity is less, like 2 minutes to 5 minutes.
Refresh token expiry validity is longer, like 7 days.
When the access token expires, frontend calls the refresh token API.
Backend validates the refresh token and generates a new access token.
Frontend receives the new access token and uses it for the next API requests.
So basically, access token is used for API requests, and refresh token is used to get a new access token.

## How do you implement token expiration?
=> We implement token expiration by providing the expiry time while creating the JWT token.
In the JWT sign method, we provide the expiry time, like 2 minutes or 5 minutes.
After that expiry time, the token becomes invalid.
Backend validates the token on every protected API request.
If the token is expired, backend returns 401 Unauthorized.

## How do you handle an expired JWT in Angular?
=> In frontend side, when the JWT is expired, backend returns 401 Unauthorized.
We handle this 401 response using the Angular HTTP Interceptor.
Then frontend clears the token from localStorage.
After that, we navigate the user to the login page.
User logs in again and gets a new token.

## How do you implement logout with JWT?
=>When user clicks on the Logout button, frontend clears the JWT token from localStorage.
Then we clear the user session/data from the frontend.
After that, we navigate the user to the login page.
If required, we can also call the logout API from the backend side.
After logout, the old token should not be used for accessing protected APIs.

## How do you prevent unauthorized users from accessing APIs?
=>We use JWT authentication and role-based authorization.
For every protected API request, frontend sends the JWT token in the Authorization header.
Backend first validates the JWT token.
After that, backend checks the user's role and permission.
If the user is not authorized, backend returns 403 Forbidden.
If the token is missing or invalid, backend returns 401 Unauthorized.
So only authenticated and authorized users can access the protected APIs.

## What is RBAC?
=>RBAC means roll based access controlled
=>user role wise access the routes and used the user wise portal 

## What is ACL?
=>ACL stands for Access Control List.
Basically, ACL defines which user can access which resource or API.
For example, in our application, an Agent can access agent-related APIs, but they cannot access Admin APIs.
So, ACL is used to control access based on user permissions.

## Difference between RBAC and ACL?
## How would you implement role-based authorization in NestJS?
## How do Angular route guards help with authorization?
## Can Angular guards alone provide security?
## Why must authorization also be implemented on the backend?

# 2. OAuth2 — VERY IMPORTANT

## What is OAuth 2.0?
=> OAuth 2.0 is an authorization protocol.
In my current application, we use Microsoft SSO login as a real example.
When user clicks on the SSO login button, user is redirected to Microsoft.
Microsoft authenticates the user and provides the required token.
Our application uses this token to access the required protected information.
So, basically Microsoft SSO is a real-world example where OAuth 2.0 is used for authorization, and with OIDC it is also used for authentication.

## Difference between OAuth2 and JWT?
=> OAuth 2.0 is mainly used in the SSO login case, where we use a third-party Identity Provider like Microsoft to login to our application.
In this case, we get an access token from the third-party provider and use it to access the required information.
JWT is a token format. In our current application, backend can create a JWT using user details like user ID, username, role and expiry.
Real-time example:
OAuth 2.0 → Microsoft SSO login
JWT → Our application backend creates and validates the application token
So basically, OAuth 2.0 is the authorization flow, and JWT is the token format.

## Is OAuth2 an authentication protocol?
=> 
No, OAuth 2.0 is mainly an authorization protocol.
It is used to give an application permission to access protected resources.
For authentication, we commonly use OIDC (OpenID Connect) on top of OAuth 2.0.
For example, in our Microsoft SSO, OAuth 2.0 handles the authorization flow and OIDC handles the user authentication.

## Explain the OAuth2 authorization code flow.
=>
First, user clicks on the SSO Login button in our application.
Angular has the required Microsoft IdP configuration.
After clicking the button, Angular creates the required login request/link and redirects the user to the Microsoft login page.
User selects or enters their Microsoft account details and completes the login.
Microsoft validates the user and returns an authorization code to our application.
Angular sends this code to our backend.
Backend sends the code to Microsoft and gets the required access token and other token information.
We don't directly use the Microsoft token as our application login token.
Backend validates the Microsoft response and checks whether the user is available/allowed in our application.
If everything is valid, backend generates our application JWT token and returns it to Angular.
Angular uses our application token for the current application's API requests.
So the user is successfully logged into our application using Microsoft SSO.

Basically:

Angular → Microsoft Login → Authorization Code → Backend → Microsoft → Access Token → Validate User → Application JWT → Angular

## What is an access token in OAuth2?
## What is a refresh token?
## What is the difference between OAuth2 and OpenID Connect (OIDC)?
## What is SSO?
## How does SSO work?
## What is the role of an Identity Provider (IdP)?
## What are SAML, OAuth2 and OIDC?
## When would you use SAML vs OIDC?

# 3. Angular Security — HIGH PRIORITY
## How do you secure an Angular application?
## What is an HTTP interceptor?
## How do you attach JWT to every API request using an interceptor?
## How do you handle 401 Unauthorized responses globally?
## How do you protect routes using CanActivate?
## Can a user bypass an Angular route guard?
## What is XSS?
## How can you prevent XSS in Angular?
## Why should you avoid using innerHTML with untrusted data?
## What is CSRF?
## How can CSRF attacks be prevented?
## What is CORS?
## Is CORS an authentication mechanism?
## How do you configure CORS in NestJS?
## What is Content Security Policy (CSP)?

# 4. Node.js / NestJS Security
How do you secure a NestJS REST API?
How do Guards work in NestJS?
Difference between Guard, Middleware, Interceptor and Pipe?
How do you implement JWT authentication in NestJS?
How do you implement role-based authorization using NestJS Guards?
What is PassportStrategy in NestJS?
How do you validate incoming request data?
What is the purpose of ValidationPipe?
How do you prevent malicious input?
How do you implement API rate limiting?
How do you prevent brute-force login attacks?
How do you securely store passwords?
Why should passwords never be stored as plain text?
Difference between hashing and encryption?
What is bcrypt and why is it used?

# 5. REST API Security
How do you secure REST APIs?
What HTTP status codes are commonly used for security/authentication?

For example:

200 → Success
400 → Bad Request
401 → Unauthenticated
403 → Authenticated but not authorized
404 → Not Found
429 → Too Many Requests
500 → Server Error
Difference between 401 and 403?
How do you prevent unauthorized API access?
How do you validate request payloads?
How do you prevent SQL Injection?
How do you prevent NoSQL Injection in MongoDB?
What is API rate limiting?
What is API throttling?
How do you secure sensitive API responses?
Should passwords/token information be returned from APIs?
Why should HTTPS be used for APIs?

# 6. Database Security
How do you secure MongoDB?
How do you secure PostgreSQL?
What is SQL Injection?
How can SQL Injection be prevented?
What is NoSQL Injection?
How can NoSQL Injection be prevented?
Why should database credentials not be hardcoded?
How do you manage database credentials securely?
What is the principle of least privilege?
How would you restrict database user permissions?

# 7. Audit & Enterprise Security — VERY RELEVANT TO THIS JD

Because the JD specifically says:

secure coding practices and implement audit/access controls

Prepare these:

What is an audit log?
What information should an audit log contain?
How would you implement audit logging in NestJS?
How do you track who performed an operation?
How do you track user IP address?
How do you log Create/Update/Delete operations?
How do you prevent users from modifying audit logs?
What is an access control policy?
How do you implement least-privilege access?
How would you design Admin/Supervisor/Agent permissions?
Difference between RBAC and ACL in a real application?

For your Uniconnect-type application, you can explain:

Admin
 ├── User Management
 ├── Reports
 └── Configuration

Supervisor
 ├── Agent Monitoring
 └── Reports

Agent
 ├── Customer Calling
 └── Customer Details

The backend should verify these permissions; hiding a button in Angular is not security.

# 8. SSO / SAML / OIDC

## What is SSO?
=> SSO stands for Single Sign-On.
Basically, SSO means user can login to different applications using one common login.
For example, in my current application, we have used Microsoft SSO.
User can login into our application using their Microsoft account.
So user does not need to create a separate username and password for our application.
Basically, Microsoft handles the user login and authentication, and after successful login, our application allows the user to access the application.
So, one common login is used to access the application. This is called SSO.

## How does SSO work between Angular and backend?
=> 
## OIDC SSO

In our SSO case, we used OIDC, and most of the SSO flow was handled from the frontend side.
For OIDC, some configuration details are provided by the Microsoft side, like client ID, tenant details, redirect URL, SSO/login URL and other configuration details.
These details are configured in our frontend application.
When the user clicks on the SSO Login button, the request goes to the Microsoft Identity Server.
Microsoft opens the SSO login UI, and the user provides the required information and completes the login or two-step verification.
After successful authentication, Microsoft sends a response back to our application. This response contains the required OIDC tokens, such as the ID token and access token.
We don't directly use this Microsoft token as our application's token.
We send the required token to our backend.
Backend validates the Microsoft token and checks whether the user is valid and allowed to access our application.
After successful validation, our backend generates our application JWT token and returns it to the frontend.
Then frontend stores/uses our application token for the protected API requests.

So basically the flow is:

Angular → Microsoft SSO → User Authentication → OIDC Token → Backend → Token Validation → Application JWT → Angular

This is how we completed the SSO login using OIDC.

## SAML SSO

We also used SAML for SSO.
In the SAML case, most of the SSO-related processing was handled on the backend side.
Frontend side, we mainly have the SSO Login button.
When the user clicks the button, the request goes to our backend.
Backend generates or provides the required SAML login URL, and frontend opens that URL.
Then the Microsoft SSO login portal is opened.
User provides the required information and completes the authentication.
After successful authentication, Microsoft sends a SAML response in XML format.
This SAML response goes back to our backend through the configured callback/ACS endpoint.
Backend validates the SAML response and gets the required user information from the SAML assertion.
After successful validation, backend generates our application JWT token.
This application token is then returned to the frontend, and the user is logged into our application.

So basically the SAML flow is:

Angular → Backend → Microsoft SSO → User Authentication → SAML XML Response → Backend → Validate SAML Response → Application JWT → Angular

So this overall process is called SSO login using SAML.

### What is an Identity Provider?[idp]
=> 
Identity Provider means a service which handles user authentication and login.
For example, in our application we used Microsoft as the Identity Provider.
User clicks on SSO login, Microsoft authenticates the user, and sends the required token or response to our application.
Then backend validates it and allows the user to login.


### What is SAML?
=> 
SAML stands for Security Assertion Markup Language.
It is mainly used for SSO authentication.
In SAML, the authentication response is generally in XML format.
In our project, we used Microsoft SSO with SAML.

### What is OIDC?
=> 
OIDC stands for OpenID Connect.
It is an authentication protocol built on top of OAuth 2.0.
It is commonly used for SSO and user authentication.
In our project, we used Microsoft SSO with OIDC, where we received tokens after successful login.

### Difference between SAML and OIDC?
=>Both are authentication protocols mainly used for SSO.
The main difference is SAML uses XML-based responses, and in our project the SAML configuration and most of the processing was handled on the backend side.
We used OIDC, where the SSO configuration was mainly done on the frontend side, and most of the SSO flow was handled from the frontend.
After successful login, the backend validates the response/token and generates our application token.

### What happens when an SSO token expires?
=> When the SSO token expires, the token is no longer valid.
Backend validates the token and returns 401 Unauthorized.
Frontend detects the 401 response.
Then frontend can refresh the token if refresh token is available, or redirect the user to the SSO login page again.
After successful login, the user gets a new token and can continue using the application.

# 9. Production Security Questions

## How do you manage secrets in production?
=> We don't keep secrets directly in the code.
We use environment variables for secrets like database passwords, JWT secret and API keys.
In production, we can use a secure secret management system.
We don't commit .env files or secrets to Git.
Only authorized users or services should have access to the secrets.
If any secret is exposed, we change or revoke it immediately.

## Where should API keys be stored?
=> API keys should not be stored directly in the code.
We can store them in environment variables.
In production, we can use a secure secret management system.
We should not commit API keys to Git.
Only the required application or authorized person should have access to the API keys.

## Should secrets be committed to Git?
=> No, we should not commit secrets to Git.
Secrets like database passwords, JWT secret, API keys and tokens should not be stored in the code.
We should keep them in environment variables or a secure secret management system.
We should add the .env file to .gitignore.
If any secret is accidentally committed, we should change or revoke that secret immediately.

## How do you secure environment variables?
=> We don't store sensitive information directly in the code.
We use environment variables for things like database password, JWT secret, API keys, etc.
We don't push the .env file to Git.
We add the .env file in .gitignore.
In production, we store these values in the server or secure secret management system.
Only authorized applications or users should have access to these values.

## How do you secure NGINX?
=> We use HTTPS/SSL in NGINX.
We redirect HTTP to HTTPS.
We add required security headers.
We can use rate limiting for too many requests.
We check NGINX logs for suspicious requests.
We keep NGINX updated with security patches.
We don't expose unnecessary ports or services.

## How do you configure HTTPS/SSL?
=> First, we need an SSL certificate for our domain.
We configure this SSL certificate on the NGINX server.
In NGINX, we configure the certificate file and private key.
Then we configure the application to use HTTPS instead of HTTP.
We can also redirect HTTP requests to HTTPS.
After that, all the data between the client and server is encrypted.
We also configure the required SSL/TLS settings and security headers.
Finally, we test the application and check whether HTTPS is working properly.

Simple flow:

Client → HTTPS → NGINX → API Gateway → Backend Service

## What security headers do you know?
=>Security headers are used to provide more security to our application.
Some security headers I know are:
CSP – used to protect the application from unwanted scripts and XSS attacks.
X-Frame-Options – used to protect from clickjacking.
X-Content-Type-Options – used to prevent MIME type issues.
HSTS – used to make sure our application is using HTTPS.
Referrer-Policy – used to control referrer information.
These security headers can be configured in NGINX or backend side, based on our application requirement.

## How do you prevent exposing sensitive information in logs?
=>First, we don't log any sensitive information in the application.
We should not log password, JWT token, access token, API key, database password and other sensitive details.
While logging request details, we only log the required information.
If any sensitive information is required for debugging, we can mask that information.
For example, instead of logging the complete token or password, we can show only limited information.
We also make sure production logs are accessible only to authorized users.
So basically, we log only the required information and avoid exposing sensitive data in logs. 

## How do you handle security vulnerabilities found in production?
=>First, we check what type of security issue is coming.
Then we check the application logs and monitoring to understand the issue.
We check which API, service or module is affected.
Then we try to find the root cause of the issue.
If the issue is serious, we take the required action like blocking the API, user or request.
After that, we fix the issue in the code and do proper testing.
Then we deploy the fix to production through the proper deployment process.
After deployment, we again check the logs and monitoring to make sure the issue is resolved.
We also make sure the same security issue is not coming again.

### How do you investigate a suspicious API request?
=> First, I check the application logs.
In the logs, I check which API request is coming, endpoint, request time and response.
Then I check the user details and token which is used for that API request.
I also check the IP address from where the request is coming.
Then I check the user role and permission, whether this user has access to this API or not.
I also check the request payload, whether any wrong or suspicious data is coming or not.
After checking all these things, I try to find the root cause of the suspicious request.
If required, we can block the request or user and fix the security issue.

## How do you implement application logging and monitoring?
=> Logging and monitoring are more important in our application.

Basically, logging is used to check what is happening in the backend.

In NestJS, we use the Logger function.

We log details like:
       Request endpoint
       API name
       Request method
       Response
       Response status
       Error message
       Response time

With the help of logs, we can easily find and troubleshoot the issue.

In monitoring, we check the API response time, request time, server health, server space, server load and other application performance details.

So basically, logging helps us to find what happened, and monitoring helps us to check whether the application is working properly or not.

# 10. Scenario-Based Questions — HIGH CHANCE

These are particularly important for a Full Stack Developer interview.

Scenario 1

A user changes the role from Agent to Admin in the browser DevTools. How will you prevent this?

Expected concept:

Frontend → UI restriction
Backend → JWT validation
Backend → Role/permission validation
Database → Actual user role

Never trust the role coming from the frontend.

Scenario 2

JWT is expired but the user is still using the application. What will happen?

You should explain:

Angular API request
       ↓
Backend
       ↓
JWT expired
       ↓
401 Unauthorized
       ↓
Angular interceptor
       ↓
Refresh token / re-authentication
       ↓
Retry request

Scenario 3

An attacker sends malicious input to your API. How do you protect the API?

Mention:

Input validation
Sanitization where appropriate
DTO validation
Parameterized queries / ORM
NoSQL query validation
Rate limiting
Authentication
Authorization
Security headers
Logging/monitoring

Scenario 4

A user can access /admin/users by directly entering the URL even though they are an Agent. What will you do?

Answer should include:

Angular Guard
+
Backend Authorization Guard
+
RBAC/ACL

And emphasize that backend authorization is mandatory.

Scenario 5

Someone steals an access token. What can you do?

Discuss:

Short access-token lifetime
Refresh-token rotation/revocation
HTTPS
Secure token storage strategy
Server-side session/token controls where applicable
Logout/revocation
Monitoring suspicious activity

⭐ Your Highest-Priority 15

For this particular JD, I would prepare these first:

Priority	Question
🔴	Authentication vs Authorization
🔴	JWT complete flow
🔴	Access token vs Refresh token
🔴	RBAC vs ACL
🔴	Angular Guard vs Backend Authorization
🔴	OAuth2 flow
🔴	OAuth2 vs OIDC
🔴	SSO
🔴	JWT + NestJS implementation
🔴	HTTP Interceptor for JWT
🔴	401 vs 403
🔴	XSS / CSRF / CORS
🔴	SQL Injection / NoSQL Injection
🔴	Audit logging
🔴	Secure REST API design