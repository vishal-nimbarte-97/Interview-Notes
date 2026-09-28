# If you have two databases, one for writing and one for reading, how do you synchronize the data between the Write Database and Read Database?
=>Write Service saves/updates data in Write DB.
Write Service sends an event to Kafka.
Kafka stores/delivers the event.
Read Service consumes the event.
Read Service updates the Read DB.

# Why did you use MongoDB initially?
=>Initially, we used MongoDB because our application was handling a large amount of call-related data. MongoDB provides flexible document-based storage and it was easy to store call records where the data structure could change based on different call scenarios.

# Why did you migrate from MongoDB to PostgreSQL?
=> Initially, we used MongoDB because MongoDB is a document-based database, so storing and getting the documents is easy. We can easily store multiple types of data and get the data.
=> But after some time, we had a requirement for different types of reports, and we needed to perform many operations on the MongoDB data.
=> At that time, some complex aggregation and reporting queries were causing performance issues.
=> So that was the main reason we shifted from MongoDB to PostgreSQL.
=> PostgreSQL is a relational database, so we can easily perform different types of operations, use joins between tables, and perform complex queries for our different types of reports.
=> So based on our project requirements and reporting performance, we decided to migrate the required data from MongoDB to PostgreSQL.

# Why didn't you continue with MongoDB?
=> We can continue with MongoDB because MongoDB can also handle large amounts of data.
=> But in our particular project, we were facing some performance issues when we performed complex queries, aggregation, and different types of reports.
=> Also, our requirements were more related to relational data, like joining different tables and performing different operations on the data.
=> So based on our project requirements, PostgreSQL was more suitable for us, and that's why we migrated from MongoDB to PostgreSQL.