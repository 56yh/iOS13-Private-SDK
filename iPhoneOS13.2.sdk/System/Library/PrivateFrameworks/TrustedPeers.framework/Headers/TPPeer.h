//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSSet, NSString, TPPeerDynamicInfo, TPPeerPermanentInfo, TPPeerStableInfo;

@interface TPPeer : NSObject
{
    TPPeerPermanentInfo *_permanentInfo;
    TPPeerStableInfo *_stableInfo;
    TPPeerDynamicInfo *_dynamicInfo;
    NSData *_wrappedPrivateKeys;
}

@property(retain, nonatomic) NSData *wrappedPrivateKeys; // @synthesize wrappedPrivateKeys=_wrappedPrivateKeys;
@property(retain, nonatomic) TPPeerDynamicInfo *dynamicInfo; // @synthesize dynamicInfo=_dynamicInfo;
@property(retain, nonatomic) TPPeerStableInfo *stableInfo; // @synthesize stableInfo=_stableInfo;
@property(retain, nonatomic) TPPeerPermanentInfo *permanentInfo; // @synthesize permanentInfo=_permanentInfo;
- (id)description;
@property(readonly, nonatomic) NSSet *trustedPeerIDs;
- (long long)updateDynamicInfo:(id)arg1;
- (long long)updateStableInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPermanentInfo:(id)arg1;
@property(readonly, nonatomic) NSString *peerID;

@end

