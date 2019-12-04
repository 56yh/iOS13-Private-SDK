//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUImageReader : NSObject
{
}

+ (id)_privateImageMetadataDescriptors;
+ (id)cleanImageMetadataFromData:(id)arg1;
+ (_Bool)hasPrivateImageMetadata:(id)arg1;
- (id)_readDataFromTagAtPath:(id)arg1 inMetadata:(struct CGImageMetadata *)arg2;
- (id)_readBaseImageFromDataProvider:(struct CGDataProvider *)arg1 providerSource:(id)arg2 baseWasValid:(_Bool *)arg3;
- (id)readBaseImageFromImageAtURL:(id)arg1 baseWasValid:(_Bool *)arg2;
- (id)readBaseImageFromData:(id)arg1 baseWasValid:(_Bool *)arg2;
- (id)_readAnnotationsFromDataProvider:(struct CGDataProvider *)arg1;
- (void)readAnnotationsFromArchivedModelData:(id)arg1 toController:(id)arg2;
- (id)readArchivedModelDataFromImageURL:(id)arg1;
- (id)readArchivedModelDataFromImageData:(id)arg1;
- (_Bool)readAnnotationsFromImageAtURL:(id)arg1 toController:(id)arg2;
- (_Bool)readAnnotationsFromData:(id)arg1 toController:(id)arg2;

@end

