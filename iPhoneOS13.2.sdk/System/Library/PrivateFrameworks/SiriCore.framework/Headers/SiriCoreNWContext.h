//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_nw_context;

@interface SiriCoreNWContext : NSObject
{
    NSObject<OS_nw_context> *_context;
}

+ (id)sharedInstance;
- (id)nwContext;
- (id)_init;
- (id)init;

@end

