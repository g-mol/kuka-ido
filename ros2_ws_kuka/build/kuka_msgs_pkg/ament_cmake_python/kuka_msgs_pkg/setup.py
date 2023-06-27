from setuptools import find_packages
from setuptools import setup

setup(
    name='kuka_msgs_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('kuka_msgs_pkg', 'kuka_msgs_pkg.*')),
)
