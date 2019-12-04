//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class AVAsset;

@interface WFAVAssetContentItem : WFGenericFileContentItem <WFContentItemClass>
{
}

+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)propertyBuilders;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (id)supportedTypes;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateFileRepresentation:(id /* block */)arg1 forType:(id)arg2 metadata:(id)arg3 options:(id)arg4;
- (void)generateFileRepresentation:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (id)metadataItemForCommonKey:(id)arg1;
- (id)generateExportSessionForType:(id)arg1;
@property(readonly, nonatomic) AVAsset *asset;
- (id)preferredFileType;
- (id)duration;
- (void)getPreferredFileSize:(id /* block */)arg1;
- (id)frameRate;
- (_Bool)getListAltText:(id /* block */)arg1;
- (_Bool)getListSubtitle:(id /* block */)arg1;

@end

