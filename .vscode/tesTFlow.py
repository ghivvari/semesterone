import tensorflow as tf
from tensorflow.keras import layers, models
import numpy as np

# 1. Generate fake data to simulate our scenario
# 64 images, each with 784 pixels (values between 0 and 1)
X_train = np.random.rand(64, 784).astype(np.float32)
# 64 random target labels (digits 0-9)
y_train = np.random.randint(0, 10, size=(64, 1)).astype(np.float32)

# 2. Build the Matrix-based Architecture
model = models.Sequential([
    # Input layer accepts our (64, 784) matrix
    layers.Input(shape=(784,)),
    
    # Hidden Layer: Performs (X @ W1) + B1. 
    # W1 shape: (784, 128) | B1 shape: (128,)
    layers.Dense(128, activation='relu', name='hidden_layer'),
    
    # Output Layer: Performs (H @ W2) + B2. 
    # W2 shape: (128, 10) | B2 shape: (10,)
    layers.Dense(10, activation='softmax', name='output_layer')
])

# 3. Compile the model
model.compile(
    optimizer='adam',
    loss='sparse_categorical_crossentropy',
    metrics=['accuracy']
)

# 4. Print the summary to see the parameter counts
model.summary()

# Extract the hidden layer matrices
hidden_layer = model.get_layer('hidden_layer')
W1, B1 = hidden_layer.get_weights()

print("--- LAYER 1 MATRICES ---")
print(f"Weight Matrix (W1) Shape : {W1.shape}") # Expect (784, 128)
print(f"Bias Vector   (B1) Shape : {B1.shape}")  # Expect (128,)

# Extract the output layer matrices
output_layer = model.get_layer('output_layer')
W2, B2 = output_layer.get_weights()

print("\n--- LAYER 2 MATRICES ---")
print(f"Weight Matrix (W2) Shape : {W2.shape}") # Expect (128, 10)
print(f"Bias Vector   (B2) Shape : {B2.shape}")  # Expect (10,)