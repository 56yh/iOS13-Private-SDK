//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface CNFoundationSocialProfile : NSObject <NSCopying>
{
    NSString *_urlString;
    NSString *_username;
    NSString *_userIdentifier;
    NSString *_service;
    NSString *_displayName;
}

+ (id)emptySocialProfile;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy) NSString *service; // @synthesize service=_service;
@property(readonly, copy) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(readonly, copy) NSString *username; // @synthesize username=_username;
@property(readonly, copy) NSString *urlString; // @synthesize urlString=_urlString;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isEmpty;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayName:(id)arg5;

@end

