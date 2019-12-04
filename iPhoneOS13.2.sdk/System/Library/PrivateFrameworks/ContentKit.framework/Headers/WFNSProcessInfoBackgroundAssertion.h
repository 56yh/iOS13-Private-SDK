//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContentKit/WFBackgroundAssertion.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface WFNSProcessInfoBackgroundAssertion : WFBackgroundAssertion
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (id)backgroundAssertionWithName:(id)arg1 expirationHandler:(id /* block */)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
- (void)end;
- (id)initWithName:(id)arg1 expirationHandler:(id /* block */)arg2;

@end

