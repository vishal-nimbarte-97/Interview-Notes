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
What are the security risks of storing JWT in localStorage?
What is the difference between access token and refresh token?
How do you implement token expiration?
How do you handle an expired JWT in Angular?
How do you implement logout with JWT?
How do you prevent unauthorized users from accessing APIs?
What is RBAC?
What is ACL?
Difference between RBAC and ACL?
How would you implement role-based authorization in NestJS?
How do Angular route guards help with authorization?
Can Angular guards alone provide security?
Why must authorization also be implemented on the backend?

# 2. OAuth2 — VERY IMPORTANT
What is OAuth 2.0?
Difference between OAuth2 and JWT?
Is OAuth2 an authentication protocol?
Explain the OAuth2 authorization code flow.
What is an access token in OAuth2?
What is a refresh token?
What is the difference between OAuth2 and OpenID Connect (OIDC)?
What is SSO?
How does SSO work?
What is the role of an Identity Provider (IdP)?
What are SAML, OAuth2 and OIDC?
When would you use SAML vs OIDC?

# 3. Angular Security — HIGH PRIORITY
How do you secure an Angular application?
What is an HTTP interceptor?
How do you attach JWT to every API request using an interceptor?
How do you handle 401 Unauthorized responses globally?
How do you protect routes using CanActivate?
Can a user bypass an Angular route guard?
What is XSS?
How can you prevent XSS in Angular?
Why should you avoid using innerHTML with untrusted data?
What is CSRF?
How can CSRF attacks be prevented?
What is CORS?
Is CORS an authentication mechanism?
How do you configure CORS in NestJS?
What is Content Security Policy (CSP)?

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

8. SSO / SAML / OIDC
What is SSO?
How does SSO work between Angular and backend?
What is an Identity Provider?
What is SAML?
What is OIDC?
Difference between SAML and OIDC?
What happens when an SSO token expires?
How would you integrate an enterprise SSO provider into Angular + NestJS?

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