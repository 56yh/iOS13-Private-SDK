//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMPublicUserInfo : FATObject
{
    NSNumber *_userId;
    NSString *_shardId;
    NSNumber *_privilege;
    NSNumber *_serviceLevel;
    NSString *_username;
    NSString *_noteStoreUrl;
    NSString *_webApiUrlPrefix;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSString *webApiUrlPrefix; // @synthesize webApiUrlPrefix=_webApiUrlPrefix;
@property(retain, nonatomic) NSString *noteStoreUrl; // @synthesize noteStoreUrl=_noteStoreUrl;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSNumber *serviceLevel; // @synthesize serviceLevel=_serviceLevel;
@property(retain, nonatomic) NSNumber *privilege; // @synthesize privilege=_privilege;
@property(retain, nonatomic) NSString *shardId; // @synthesize shardId=_shardId;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;

@end

