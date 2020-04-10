package com.sujithjay.weldj.examples;

import java.io.File;
import com.sujithjay.weldj.*;

public class WeldRunner {

    static {
        try {
          File lib = new File("libs/osx/" + System.mapLibraryName("weldj"));
          System.load(lib.getAbsolutePath());
        } catch (final UnsatisfiedLinkError e) {
          System.err.println("The `weldj` native library failed to load." + e);
          System.exit(1);
        }
      }

    public static void main(final String[] args) {
        final SWIGTYPE_p_WeldConf output = weld.weld_conf_new();
        System.out.println(output);
    }

}