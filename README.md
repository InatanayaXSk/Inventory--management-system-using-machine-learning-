# Inventory Management Using Time Series Analysis, Forecasting, and RFID Integration 📊🕒🔗

Managing spare parts inventory across multiple service centers to meet fluctuating market demand is a challenging task. Despite significant investments in spare parts stock, ensuring consistent availability remains a critical issue. This project addresses these challenges using time series analysis and RFID tag technology for real-time inventory tracking 🧮🔍.

## Project Overview 📝
The objective is to optimize inventory levels 📦 by accurately forecasting spare parts demand. By incorporating RFID tags for inventory tracking, the project aims to streamline inventory management, reduce holding costs and stockouts, while improving spare parts availability, ultimately enhancing customer satisfaction 🌟.

## Contents 📚
- **[Import Stuff](#import-stuff)**: Setting up the necessary libraries, tools, and RFID integration.
- **[Load the Data](#load-the-data)**: Loading the dataset for analysis, including RFID-based stock data.
- **[Basic EDA](#basic-eda)**: Conducting initial exploratory data analysis to understand the dataset and RFID-tracked stock movement.
- **[Data Preprocessing](#data-preprocessing)**: Cleaning and preparing the data, incorporating RFID-based stock flow data for time series analysis.
- **[Advanced EDA](#advanced-eda)**: Uncovering deeper patterns in the data, including RFID-based inventory movement.
- **[Time Series Analysis](#time-series-analysis)**: Analyzing trends, seasonality, and RFID-tagged stock flow patterns.
- **[Time Series Forecasting](#time-series-forecasting)**: Using time series models to predict future demand for spare parts.
- **[Model Evaluation](#model-evaluation)**: Assessing the performance of various forecasting models.
- **[RFID Tag Integration](#rfid-tag-integration)**: Demonstrating how RFID technology supports real-time stock management.
- **[Multivariate Analysis](#induct-exogenous-variable-in-sarimax-model)**: Improving the SARIMAX model by incorporating RFID data and other exogenous variables.

## Features in Data 🔍
Key features used in the analysis, enriched with RFID integration:
- `invoice_date`
- `job_card_date`
- `business_partner_name`
- `vehicle_no`
- `vehicle_model`
- `current_km_reading`
- `invoice_line_text`
- **`rfid_tag_data`**: Real-time stock tracking information from RFID tags.

## Models Deployed 🤖
For forecasting, the following models were used:
- *Auto Regression (AR)*
- *Moving Average (MA)*
- *Exponential Weighted Moving Average (EWMA)*
- *Holt-Winters Method*
- *Seasonal Autoregressive Integrated Moving Average (SARIMA)*
- *Seasonal Autoregressive Integrated Moving Average with Exogenous Variables (SARIMAX)*

## RFID Tag Integration 🔗
RFID technology is used to track real-time inventory flow, enhancing the forecasting models by providing up-to-date stock levels, improving demand-supply alignment, and offering an automated way to manage inventory. This integration reduces manual errors and supports precise stock monitoring across service centers.

## Model Evaluation 📏
The models were evaluated using:
- *Mean Absolute Error (MAE)*
- *Mean Squared Error (MSE)*

By leveraging time series analysis, RFID tracking, and forecasting, this project provides a comprehensive solution for optimizing inventory levels. The integration of RFID technology ensures real-time data accuracy, helping service centers maintain optimal stock levels, reduce costs, and improve overall customer satisfaction!
