# 1. Project deep-dive (most common start) 

## Explain your current project end to end — architecture, modules, your exact role.
=> Currently, I am working on a call center web application called Uniconnect, which is a Bajaj Finserv product.

In this project, my role is as a Full Stack Developer. My main responsibility is to work on the integration between the frontend and backend. I would say around 60% of my work is on the frontend and 40% on the backend.

On the frontend side, we use Angular, and on the backend side, we use NestJS. We use PostgreSQL and MongoDB as databases.

On the architecture side, the frontend follows a monolithic architecture, while the backend follows a microservices architecture. We also use the CQRS pattern for separating read and write operations.

For deployment, we use Docker, and our cloud platform is Microsoft Azure.

Overall, my work involves developing and integrating frontend and backend features, working with APIs and databases, handling production issues, and supporting the application deployment process

## How many people in the team? What did you own personally?
=> There are around 25 members in our team. We follow the Agile methodology and work in different roles.

There are more than 10 developers, including frontend developers, backend developers, and full stack developers. Apart from developers, we also have testers, support team members, and management members.

In the team, each developer has their own responsibilities and tasks. Personally, I work as a Full Stack Developer, where I mainly handle the integration between the frontend and backend. Around 60% of my work is on the frontend using Angular and 40% on the backend using Node.js and NestJS.

I am responsible for developing new features, API integration, database-related work, fixing production issues, and coordinating with the team whenever required.

## What was the hardest bug or production issue you fixed? How did you find the root cause?
=> One of the hardest production issues I handled was a Socket connection problem caused by network disconnection.

In our application, Socket communication is important for the agent desktop because we use it for real-time events and agent call-status timing. When an agent's network connection was lost, the Socket connection was disconnected, and in some cases the timing was not calculated correctly. This was also affecting our production reports.

First, I checked the frontend Socket events and the backend logs to understand where the connection was getting disconnected. I found that the issue was mainly happening when the client-side network was disconnected.

To handle this, we implemented proper Socket disconnect handling. When the network goes down, the frontend notifies the user that the network connection is lost, and the application handles the timing accordingly. The disconnect event is also captured on the backend and stored in logs.

We then displayed these logs in the Admin and Supervisor portals. So, if there was a report issue and someone said that the application was down, we could check the logs and identify whether a particular agent's network was disconnected and at what time.

This was important because it helped us clearly differentiate between an application/server issue and a client-side network issue. It also helped the support team and management investigate production issues using proper logs instead of depending only on user feedback.


# 2. Design / architecture questions

## Monolith vs microservices — when would you not use microservices?
=> A monolithic architecture means the application is developed and deployed as a single unit. It is generally easier to develop, maintain, and deploy, especially for small or less complex applications.

In a monolithic application, if we make a small change, we usually need to build and deploy the overall application. Also, if there is a major issue with the application, it can affect the entire application.

In microservices architecture, the application is divided into multiple independent services. Each service can be developed, deployed, and scaled independently.

For example, if one service has an issue or crashes, ideally only that particular service is affected, while the other services can continue working.

We use microservices in our current project because the application is larger and has different business modules.

However, I would not use microservices for every application. If the application is small, has simple business requirements, and does not need independent scaling or deployment, I would prefer a monolithic architecture because it is simpler to develop, deploy, and maintain.

## How do microservices talk to each other? What if one is down?
=> 
In my current application, we use NestJS, and every microservice is developed using NestJS.

NestJS provides MessagePattern, which we use for communication between two microservices.

Apart from that, we also use Apache Kafka as a message broker for communication between services.

In our current application, we also use RabbitMQ, but this is mainly used for another calling service. That service is developed using Golang and FreeSWITCH.

If one microservice is down, then that particular service will be affected, but the other services can continue working independently.

## MongoDB vs PostgreSQL — give a real case where you picked one over the other.
=>Currently, I am working on a MongoDB to PostgreSQL migration in my project.

The main reason for this migration is that our application handles a very large amount of calling data. In some cases, the application can have a target of around 1 crore calling records, and we faced responsiveness issues with MongoDB for this type of data volume.

Because of these performance and responsiveness issues, we started migrating the required data from MongoDB to PostgreSQL.

So, in my current project, I am working on the migration from MongoDB to PostgreSQL based on the application's data volume and performance requirements.

## How do you handle a slow API? Walk me through your steps.
=>If any API is slow, first I check the API response time and backend logs.

Then I check where the API is taking more time, like:

Backend logic
Database query
Another microservice or external API

If the issue is in the database, I check and optimize the query.

After finding the root cause, I fix the issue and test the API again to check whether the response time is improved.

# 3. Security (this JD pushes it hard)

## How do you implement RBAC and ACL in a real app?
=> First, I analyze the requirement and understand how many types of users are there in the application.

Then I understand the user hierarchy, like which type of user can create or manage another type of user.

Based on that, I define the roles and permissions.

In RBAC, we give permissions based on the user's role.

In ACL, we define what specific user or role can access or perform specific actions.

## Where do you store JWT and why? Refresh token strategy?
=> Currently, we store the JWT in localStorage, but it is not stored directly. We store it in an encrypted format.

We use localStorage because our application can have multiple tabs open at the same time, and the user may need to access different modules, like reports and dashboards, using the same login session.

The access token has a shorter expiry time, while the refresh token has a longer expiry time.

When the access token expires, we use the refresh token to get a new access token from the backend, so the user does not need to log in again.

## Difference between authentication and authorization, and between JWT and OAuth2.
=> Authentication means the user login flow. The user provides their details, like username and password, and the backend validates those details. If the details are correct, the user can log in to the system.

Authorization means which type of access the user gets after login. For example, in our application, we have different types of users like Agent, Supervisor, and Admin. All users can log in using their username and password, but based on the user's role, we provide access to different portals and routes. This process is called authorization.

JWT means JSON Web Token. We create the JWT using user details, expiry time, and a secret key. Then we return the token to the frontend, and this token is used to authenticate and authorize API requests.

OAuth2 is mainly used when we want to use a third-party provider for login or access. For example, Login with Google is a common example. The user logs in through Google, and our application does not directly handle the user's Google password.

## What secure coding practices do you follow? How do you handle audit logs?
=> For secure coding, I follow practices like authentication and authorization, JWT validation, input validation, proper error handling, and not exposing sensitive information in API responses or logs.

For audit logs, in our current application we maintain logs for important user activities like create, update, and delete operations.

We capture details like the user, API, action, and IP address, and store these logs so that Admin or Supervisor can check who performed the activity and when.

These audit logs are also useful for tracking production issues and compliance requirements.

# 4. Delivery and process

## Your Git branching strategy, code review process.
=>As per my understanding, first we get or pull the latest code from the upstream branch to our logical or feature branch.
Then we do our development in our logical or feature branch.
Once the development is completed, we commit and push our code to our logical or feature branch.
After that, we create a Pull Request. Our team leader or senior developer reviews the code.
If the code is approved, then it is merged into the downstream or main branch.
So the flow is:
Upstream Branch → Logical/Feature Branch → Development → Push Code → Pull Request → Senior/Team Lead Review → Merge → Downstream/Main Branch using this i want to the iamge create a image horinatal and deeply understinding

## How does your code reach production? (CI/CD, Jenkins, environments)
=>In my current application, CI/CD is not set up yet.

Currently, a separate DevOps team has been created to manage the deployment process and set up the CI/CD pipeline.

They are currently working on setting up the CI/CD pipeline for the application.

For now, our development and deployment process is managed manually, and the DevOps team is working on automating this process using CI/CD.

## How do you estimate a task? What if you realise it will take double?
=>First, I understand the complete requirement and break the task into smaller tasks.

Then I check the development work, API integration, database changes, testing, and any dependencies involved.

Based on this, I give an estimated time for completing the task.

If I realize that the task will take double the estimated time because of some technical issue or dependency, I first identify the reason.

Then I inform my team leader or manager about the issue and the updated timeline.

I don't wait until the last moment. I communicate early so the team can plan accordingly.

## How do you monitor a live application? What alerts do you set?
=> In our current application, we monitor the live application using logs and monitoring.
We mainly check API response time, API errors, Socket connection issues, and server health.
If any critical issue occurs, we check the logs, find the root cause, and inform the concerned team.

# 5. Managerial / behavioural

## Tell me about a conflict with a teammate, tester, or client.
=>In one production issue, there was a discussion with the client team because they thought the issue was from our application.

I checked the frontend Socket events and backend logs and found that the issue was happening because of the client's network disconnection.

Instead of arguing, I shared the logs and the exact timing with the team and explained the issue.

After that, we worked together to handle the issue properly and added better logging for future cases.

So, I try to handle conflicts by understanding the issue first and supporting my point with proper technical information.

## A production issue at 11 PM — what do you do?
=> If there is a production issue at 11 PM, we need to support the issue even if it is outside our normal working hours.

First, I connect with the team and discuss the issue. Then we check the logs, understand the root cause, and work together on the solution.

If required, I can give extra time to resolve the production issue and make sure the application is working properly.

## Client changes requirements mid-sprint. Your reaction?
=> If the client changes the requirement in the middle of the sprint, first we discuss it with the team leader and manager.

We also have a discussion with the client in the same meeting to understand the exact requirement and priority.

Based on the discussion and the final decision, I plan the task again with separate time estimation and timeline.

Then I continue the development based on the updated requirement.

## Have you mentored juniors or reviewed their code?
=>Yes, I have helped junior developers in my team.
I help them when they face technical issues and explain the requirement or solution.
I also review their code and suggest improvements when required.

## Why leaving current company? Why this company?
=>I am looking for better personal and professional growth and want to learn new technologies and work on different types of projects.

I also want to explore more areas like backend development, networking, and DevOps. I feel this opportunity will give me a chance to learn new things and grow further in my career.

## Where do you see yourself in 3 years?
=>In the next 3 years, I want to become a strong Full Stack Developer with good knowledge of backend development, networking, and DevOps.

I also want to take more responsibilities, work on complex projects, and contribute more to the team.

## Notice period, expected CTC, are you okay with the work location/shift.
=>Currently, I am serving my notice period. My total notice period is 60 days, and my last working day is 25th October.

My current CTC is 6 LPA. Based on my roles and responsibilities and my experience as a Full Stack Developer, my expected CTC is around 10 to 12 CTC.

I am comfortable with the work location and shift as per the company requirements.

===================================================================================================

# 1. Authentication

## JWT structure (header, payload, signature) — how is it verified?
=> Header: In this section, it contains the header details like the algorithm and token type.
Payload: This section contains the user details and token expiry time.
Signature: This section contains the combination of the secret key, payload, and header, which is used to verify the JWT.

## Access token vs refresh token. Expiry times you use. How do you rotate refresh tokens?

## Where do you store the token — localStorage vs httpOnly cookie? Which is safer and why?

## How do you log a user out if JWT is stateless? (token blacklist / short expiry / Redis)
=>JWT is stateless, so the server does not normally store the token and cannot directly delete it.

When the user clicks Logout:

We clear the JWT from the frontend.
The user is redirected to the login page.
The access token has a short expiry time, so even if someone has the old token, it becomes invalid after expiry.
If we need immediate token invalidation, we can maintain a blacklist using Redis.

## OAuth2 flows — Authorization Code with PKCE, Client Credentials. Which one for a web app?
=>Exapling SAML flow

## SSO — SAML vs OIDC, how the flow works, what your app does with the response.
=> sso login with microsoft using OIDC
=> login with biometric with innation using SAML

# 2. Authorization

## RBAC vs ACL — explain with a real example from your project.

## How do you protect a route in NestJS? (Guards, decorators, @Roles())
=> Gaurds, Roles & decorators

## Same user, different permissions per record — how do you handle it? (resource-level ACL)

## How do you stop a user from reading another user's data by changing the ID in the URL? (IDOR / broken object level authorization)
=>If the same user has different permissions for different records, we check the permission at the record level.

For example, one supervisor can access some customer records, but not all customer records.

So, when the user requests a record, the backend checks whether that user has permission for that specific record. If permission is available, we allow access; otherwise, we reject the request.


# 3. Secure coding — they will ask OWASP Top 10

## SQL injection and NoSQL injection — how do you prevent both? (parameterized queries, input sanitization, $where risks in Mongo)
=> For SQL injection in PostgreSQL, we use parameterized queries and stored procedures instead of directly adding user input into the SQL query.

This helps prevent SQL injection in relational databases.

For MongoDB, we validate and sanitize the input and avoid directly accepting MongoDB operators from the user input, like $where or other query operators.

So, for both databases, we validate the input and use safe query methods.

## XSS and CSRF — difference and prevention.

## How do you validate input? (class-validator, DTOs, Joi)
=>First, I check whether the input is empty or not.
Then I check the input type.
After that, if required, I check the length of the input.
Then I check the input format, like email, phone number, date, or other required formats.
In NestJS, we can handle these validations using DTOs and class-validator.

## Rate limiting and brute-force protection on login.
=>Rate limiting means we set a limit on how many times the same API can be called from one IP address within a specific time.
For example, if one IP address is continuously hitting the login API multiple times, it can be treated as suspicious activity or a possible attack.
So, we set a limit. If the request count goes above that limit within the given time, we can temporarily block or restrict that IP address.
This is called rate limiting and it helps protect the application from brute-force attacks.

=>Brute-force attacks happen when an attacker repeatedly tries different usernames or passwords to get access to the application.
If they send too many requests, it can also create load on the server.
So, we use rate limiting to restrict repeated requests and protect the login API.

## How do you store passwords? (bcrypt/argon2, salt, never MD5)
=>In my current application, we use the bcrypt module to store passwords.
We don't store the actual password in the database. We store the bcrypt hashed password.
Bcrypt also uses a salt while generating the password hash. The salt helps make the generated hash different even if two users have the same password.
During login, we don't decrypt the password. We use bcrypt to compare the entered password with the stored bcrypt hash.
We never store passwords in plain text.

## Where do you keep secrets and DB passwords? (env vars, vault, never in Git)
=> In my current application, I store important password data in the system environment variables. I don't store it directly in the code and I don't commit it to Git.

=> For example, DB password and other important secrets are stored at the system/server level.

=> If we need to change or update the password, the authorized administrator can update it at the system level, and the application will use the updated value.

## Security headers — Helmet, CORS setup,

## HTTPS/TLS.
=>=> HTTPS means HTTP with security. It provides secure communication between the client and server.

=> TLS is the security protocol which provides encryption for the data during transfer.

=> So when our frontend communicates with the backend using HTTPS, TLS encrypts and protects the data while it is transferring between the frontend and backend.

# 4. Audit and observability (JD mentions it)

## What do you log and what do you never log? (never log passwords, tokens, card data, PII)
## How do you build an audit trail — who did what, when?
## Correlation ID for tracing a request across microservices.
## Health checks and alerts.

# 5. Backend design

## How do you secure service-to-service calls in microservices?
=> Currently, we use the CQRS microservice pattern in our application.
=> For service-to-service communication, we use NestJS MessagePattern.
=> Using MessagePattern, one microservice can communicate with another microservice through the required message pattern.
=> For security, we make sure only authorized services can communicate with the required services and we don't expose internal microservice APIs directly to the public.

## API versioning, pagination, error response format.
=> For API versioning, we use versions like v1, v2 at the starting of the endpoint.
=> For example, /api/v1/users and /api/v2/users.
=> For GET APIs, we use pagination. We also apply pagination in the database query, so we don't fetch all the data at once.
=> For error response, we return the error status code, message, and error details to the client.
=> So the client can understand what error occurred based on the status code and message.

## How do you handle a DB query that got slow? (indexes, explain plan, aggregation tuning)
=> If the query is slow, first of all I check which part is taking more time.
=> In some cases, we apply more joins between two or more tables to fetch the data, so because of that the query can take more time and become slow.
=> I also make sure that we are using proper indexing, because indexing helps to increase the execution speed of the queries.
=> If indexing is not applied on the required columns, then we can apply indexing to improve the query execution performance.
=> indexing [apply to the required coloumn to increase the speed of queries]

## Transactions in MongoDB vs PostgreSQL.
=> I have an idea about transactions in PostgreSQL.
=> We use BEGIN, ROLLBACK, and COMMIT for transactions.
=> For example, we have two users, User A and User B, and both have 500 rupees.
=> If User A transfers 500 rupees to User B, multiple database operations are performed.
=> We start the transaction using BEGIN. If any error occurs or the server crashes during the transaction, we use ROLLBACK, so the changes are reverted and incomplete data is not stored.
=> If all the operations are completed successfully, we use COMMIT, and the changes are permanently saved in the database.
=> So basically, BEGIN starts the transaction, ROLLBACK reverts the changes if there is an error, and COMMIT permanently saves the changes.

## Caching — where and how you invalidate it.
=> Caching is very important in an application.
=> In my current application, I have used caching in two ways. We can use browser cache directly, or we can use Redis, based on the requirement.
=> Basically, when the same API is called multiple times and the data is not changing frequently, we can use caching.
=> First time, the request goes to the server and we get the data. Then we store that data in the browser cache or Redis, based on the requirement.
=> When the same API is called again, we can get the data from the cache instead of calling the database or doing the complete processing again. So it reduces the load on the server and improves the response time.
=> If the data is updated or we need fresh data, we invalidate or clear the cache and get the updated data from the server again.

