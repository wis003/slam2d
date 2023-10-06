from setuptools import find_packages
from setuptools import setup

setup(
    name='tmf882x_interfaces',
    version='1.0.0',
    packages=find_packages(
        include=('tmf882x_interfaces', 'tmf882x_interfaces.*')),
)
