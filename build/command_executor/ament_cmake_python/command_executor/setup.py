from setuptools import find_packages
from setuptools import setup

setup(
    name='command_executor',
    version='0.1.0',
    packages=find_packages(
        include=('command_executor', 'command_executor.*')),
)
