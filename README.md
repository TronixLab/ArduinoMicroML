# ArduinoMicroML
Embedded Machine Learning for Microcontroller using MicroML framework. [MicroML](https://openbase.com/python/micromlgen) brings Machine Learning algorithms to microcontrollers, including limited 8-bit Arduino AVR boards, to run a classification model. The original repository can be found [here](https://github.com/eloquentarduino/micromlgen).

**Supported classifiers**
* Decision Tree
* Random Forest
* XGBoost
* Gaussian Naive Bayes
* Support Vector Machines (SVC and OneClassSVM)
* Relevant Vector Machines
* SEFR (Fast Linear-Time Classifier)
* PCA (Principal Component Analysis)

## Install
```pip install micromlgen```

## Usage
```
from micromlgen import port
from sklearn.svm import SVC
from sklearn.datasets import load_iris


if __name__ == '__main__':
    iris = load_iris()
    X = iris.data
    y = iris.target
    clf = SVC(kernel='linear').fit(X, y)
    print(port(clf))
 ```
 You may pass a classmap to get readable class names in the ported code
 ```
 from micromlgen import port
from sklearn.svm import SVC
from sklearn.datasets import load_iris


if __name__ == '__main__':
    iris = load_iris()
    X = iris.data
    y = iris.target
    clf = SVC(kernel='linear').fit(X, y)
    print(port(clf, classmap={
        0: 'setosa',
        1: 'virginica',
        2: 'versicolor'
    }))
 ```
 It can export a PCA transformer.
 ```
 from sklearn.decomposition import PCA
from sklearn.datasets import load_iris
from micromlgen import port

if __name__ == '__main__':
    X = load_iris().data
    pca = PCA(n_components=2, whiten=False).fit(X)
    
    print(port(pca))
 ```
Read the post about SEFR.
```
pip install sefr
```
```
from sefr import SEFR
from micromlgen import port


clf = SEFR()
clf.fit(X, y)
print(port(clf))
```

# Examples
| ![space-1.jpg](https://github.com/TronixLab/ArduinoMicroML/blob/main/gif/RGB.gif?raw=true) | 
|:--:| 
| **Fig. 1** *RGB color classifier* |

| ![space-1.jpg](https://github.com/TronixLab/ArduinoMicroML/blob/main/gif/FlexPunch.gif?raw=true) | 
|:--:| 
| **Fig. 2** *IMU classifier* |

| ![space-1.jpg](https://github.com/TronixLab/ArduinoMicroML/blob/main/gif/MorseCode.gif?raw=true) | 
|:--:| 
| **Fig. 3** *Morse Code classifier* |

| ![space-1.jpg](https://github.com/TronixLab/ArduinoMicroML/blob/main/gif/KeyWordSpotting.gif?raw=true) | 
|:--:| 
| **Fig. 4** *Key word spotting* |

## Video Tuturoial on YouTube
[![GitHub Logo](https://github.com/TronixLab/MicroML-rgbClassifier/blob/main/notebook/Youtube.jpg)](https://www.youtube.com/watch?v=qeqfoGQs9yo)
