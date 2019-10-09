import pickle

class Image:
    def __init__(self):
        self.files = []
        self.descriptors = {}

iso = Image()
with open("filesystem", "wb") as f:
    pickle.dump(iso, f)
