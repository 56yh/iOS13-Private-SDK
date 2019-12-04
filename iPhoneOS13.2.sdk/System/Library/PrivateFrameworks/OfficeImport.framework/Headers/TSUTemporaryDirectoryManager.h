//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface TSUTemporaryDirectoryManager : NSObject
{
    NSURL *_baseDirectoryURL;
}

+ (id)makeUniqueDirectoryWithBaseDirectory:(id)arg1 filename:(id)arg2;
+ (id)sharedManager;
+ (Class)managedTemporaryDirectoryClass;
+ (id)baseDirectoryURL;
- (id)newDirectoryWithFilename:(id)arg1;
- (void)_clearDirectories:(id)arg1;
- (id)_readDirectories;
- (id)init;

@end

