//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RCCaptureFormat : NSObject
{
}

+ (id)AVAssetAuthoringMetadataWithCreationDate:(id)arg1 title:(id)arg2 uniqueID:(id)arg3;
+ (void)_AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 outputExtensionWithFallbacks:(id)arg2 preferredFormat:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
+ (void)AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 preferredOutputExtension:(id)arg2 preferredFormat:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
+ (id)AVAssetExportPresetForExportingToExtension:(id)arg1 preferredFormat:(unsigned int)arg2;
+ (id)AVMediaTypeForFileExtension:(id)arg1;
+ (id)AVFileTypeUTIForFileExtension:(id)arg1;
+ (id)fileFormatsDirectlyImportable;
+ (id)fileExtensionsSupported;
+ (id)fileExtensionForAssetExport;
+ (id)fileExtensionForIntermediateAssetCapture;

@end

