package com.sujithjay.weldj.examples;

import com.sujithjay.weldj.*;

public class WeldRunner {

    static {
        try {
            System.load("./libweldj.dylib");
        } catch (final UnsatisfiedLinkError e) {
          System.err.println("The `weld` native library failed to load." + e);
          System.exit(1);
        }
      }

    public static void main(final String[] args) {
        final SWIGTYPE_p_WeldConf output = weld.weld_conf_new();
        System.out.println(output);
    }

}