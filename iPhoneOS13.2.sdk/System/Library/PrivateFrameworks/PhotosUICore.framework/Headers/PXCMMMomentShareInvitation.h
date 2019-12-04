//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <PhotosUICore/PXCMMInvitation-Protocol.h>
#import <PhotosUICore/PXMediaTypeAggregating-Protocol.h>

@class NSDate, NSString, PHFetchResult, PHMomentShare, PXAssetCollectionActionManager;
@protocol PXCMMInvitationParticipant, PXDisplayAsset, PXUIImageProvider;

@interface PXCMMMomentShareInvitation : NSObject <PXMediaTypeAggregating, PXCMMInvitation, NSCopying>
{
    long long _shareType;
    NSString *_title;
    NSString *_subtitle;
    id <PXCMMInvitationParticipant> _owner;
    id <PXDisplayAsset> _posterAsset;
    id <PXUIImageProvider> _posterMediaProvider;
    PHMomentShare *_momentShare;
    PHFetchResult *_participantsFetchResult;
    PHFetchResult *_previewAssetsFetchResult;
}

+ (id)invitationWithMomentShare:(id)arg1;
+ (id)new;
@property(readonly, nonatomic) PHFetchResult *previewAssetsFetchResult; // @synthesize previewAssetsFetchResult=_previewAssetsFetchResult;
@property(readonly, nonatomic) PHFetchResult *participantsFetchResult; // @synthesize participantsFetchResult=_participantsFetchResult;
@property(readonly, nonatomic) PHMomentShare *momentShare; // @synthesize momentShare=_momentShare;
@property(readonly, nonatomic) id <PXUIImageProvider> posterMediaProvider; // @synthesize posterMediaProvider=_posterMediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> posterAsset; // @synthesize posterAsset=_posterAsset;
@property(readonly, nonatomic) id <PXCMMInvitationParticipant> owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long shareType; // @synthesize shareType=_shareType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)momentShareStatus;
- (void)acceptWithCompletionHandler:(id /* block */)arg1;
- (id)contextForActivityType:(unsigned long long)arg1;
@property(readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSDate *expiryDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSString *identifier;
- (id)invitationWithUpdatedPreviewAssetsFetchResult:(id)arg1;
- (id)invitationWithUpdatedParticipantsFetchResult:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithMomentShare:(id)arg1;
- (id)init;
@property(readonly, nonatomic) long long aggregateMediaType; // @dynamic aggregateMediaType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

