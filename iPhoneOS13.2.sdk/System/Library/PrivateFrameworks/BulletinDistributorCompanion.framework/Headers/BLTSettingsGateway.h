//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BBSettingsGateway, NSLock;

@interface BLTSettingsGateway : NSObject
{
    BBSettingsGateway *_actualSettingsGateway;
    NSLock *_actualSettingsGatewayLock;
    int _token;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)surrogateWithQueue:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

