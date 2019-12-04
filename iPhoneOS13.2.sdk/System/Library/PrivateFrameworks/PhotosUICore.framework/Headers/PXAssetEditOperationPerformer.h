//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress, NSString;
@protocol PXDisplayAsset;

@interface PXAssetEditOperationPerformer : NSObject
{
    NSString *_type;
    id <PXDisplayAsset> _asset;
    NSProgress *_progress;
}

@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void)performEditOperationWithCompletionHandler:(id /* block */)arg1;
- (id)initWithEditOperationType:(id)arg1 asset:(id)arg2;
- (id)init;

@end

