//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OCCancel, OITSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface OCMapper : NSObject
{
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;
- (id)temporaryDirectoryPath;
- (void)teardown;
- (void)setup;
- (void)quit;
- (_Bool)isCancelled;
- (void)cancel;
- (id)init;

@end

