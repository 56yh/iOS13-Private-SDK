//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsFoundation/NFCallbackRegistration-Protocol.h>

@class NSString, Protocol;

@protocol NFContext <NFCallbackRegistration>
- (void)useObject:(id)arg1 forProtocol:(Protocol *)arg2 name:(NSString *)arg3;
- (void)useObject:(id)arg1 forProtocol:(Protocol *)arg2;
- (void)useObject:(id)arg1 forClass:(Class)arg2 name:(NSString *)arg3;
- (void)useObject:(id)arg1 forClass:(Class)arg2;
@end

