//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVInternalDeviceList : NSObject
{
    id /* block */ changeListener;
    NSMutableArray *deviceList;
    struct _opaque_pthread_mutex_t listLock;
}

+ (id)defaultDeviceOfType:(unsigned int)arg1;
+ (id)newDeviceList;
@property(copy, nonatomic) id /* block */ changeListener;
- (id)deviceList;
- (void)notifyDeviceListChanged;
- (void)dealloc;
- (void)cleanup;
- (id)init;
- (unsigned int)dataSourceControlID;

@end

