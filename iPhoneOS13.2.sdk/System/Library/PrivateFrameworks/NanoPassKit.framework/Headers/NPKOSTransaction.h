//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface NPKOSTransaction : NSObject
{
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_name;
}

+ (id)transactionWithName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)invalidate;
- (void)dealloc;
- (id)_initWithName:(id)arg1;

@end

