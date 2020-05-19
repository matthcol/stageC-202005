# -*- coding: utf-8 -*-
"""
Created on Tue May 19 15:50:32 2020

@author: Matthias
"""

import numpy as np
import matplotlib.pyplot as plt

temperatures = [15.5, 17.3, 25.5, 18.1, 16.8]

plt.plot(temperatures)
plt.plot(np.tile(np.mean(temperatures), len(temperatures)))
plt.show()