# Operating Systems Project

This is the code for my operating systems project. Different folders contain different codes.

The code in this repository corresponds to the programming project of Chapter 2 on Linux Kernel Modules from the 10th edition of Operating System Concepts.

### Instructions for running
* `cd` into the corresponding foler.
* Run `make` to build the files.
* If you are on a system with secure boot - 

```
sudo kmodsign sha512 ../signing/MOK.priv ../signing/MOK.der <module.ko>
```

You will have to create the signing keys before. Mine are saved in `signing`, so I am using that path.

* Insert the module using 
```
sudo insmod <module.ko>
```

* Remove the module by using
```
sudo rmmod <module>
```


For making the corresponding MOK files, go [here](https://ubuntu.com/blog/how-to-sign-things-for-secure-boot).