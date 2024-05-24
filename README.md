
# Aqua Hub - Nautical Sports Management Application

Welcome to **Aqua Hub**, a nautical sports management application developed in Qt C++. This application is designed to provide an intuitive and efficient interface for nautical clubs. Aqua Hub integrates facial recognition with OpenCV and a mailing system with SMTP.

## Prerequisites

Make sure you have the following prerequisites installed on your system:

- Qt 5.9.9
- CMake 3.7.2 
- OpenCV 3.2.0 vc14 
- SMTP Library

## Installation

1. **Clone the repository:**

    ```bash
    git clone https://github.com/your-username/aqua-hub.git
    cd aqua-hub
    ```

2. **Resource setup:**

    The `resource` folder contains all necessary files for setting up the database, CMake installation files for OpenCV, and the SMTP library.

    - **Database setup:** 

      Use the provided SQL scripts in the `resource/database` folder to create the necessary databases.


3. **Compile OpenCV:**

    Follow these steps to compile OpenCV with CMake:

    (https://www.youtube.com/watch?v=0KNh_7fUqrM)

4. **Compile SMTP Library:**

    Similarly, compile the SMTP library using CMake

## Facial Recognition Setup

1. **Documentation:**

    Refer to the OpenCV documentation to understand how to set up and use facial recognition: [OpenCV Documentation](https://docs.opencv.org/)

2. **Create Your Own Data:**

    You will need to create your own dataset for facial recognition. Capture images and label them accordingly.

3. **Train the Model:**

    Use the created dataset to train your facial recognition model. Ensure the model is well-trained for accurate recognition.

## Usage

Once all the prerequisites are installed and the application is set up, you can run Aqua Hub:

```bash
./aqua-hub
