//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WRReplyStoreInfo : NSObject
{
    _Bool _supportsSmartReplies;
    unsigned long long _defaultCount;
    NSString *_defaultsDomain;
    NSString *_defaultsKey;
    NSString *_defaultsChangedNotificationName;
}

+ (id)infoForCategory:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool supportsSmartReplies; // @synthesize supportsSmartReplies=_supportsSmartReplies;
@property(readonly, nonatomic) NSString *defaultsChangedNotificationName; // @synthesize defaultsChangedNotificationName=_defaultsChangedNotificationName;
@property(readonly, nonatomic) NSString *defaultsKey; // @synthesize defaultsKey=_defaultsKey;
@property(readonly, nonatomic) NSString *defaultsDomain; // @synthesize defaultsDomain=_defaultsDomain;
@property(readonly, nonatomic) unsigned long long defaultCount; // @synthesize defaultCount=_defaultCount;

@end

