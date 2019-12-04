//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSPDataStorage-Protocol.h>

@class NSString, SFUCryptoKey, SFUDataRepresentation;

@interface TSPReadOnlyProvidedDataStorage : NSObject <TSPDataStorage>
{
    SFUDataRepresentation *_dataRep;
}

- (_Bool)writeToBundleWriter:(id)arg1 preferredFilename:(id)arg2 filename:(id *)arg3 didCopyDataToBundle:(_Bool *)arg4;
- (id)AVAssetWithOptions:(id)arg1 usingResourceLoaderWithContentTypeUTI:(id)arg2;
- (id)AVAssetWithOptions:(id)arg1 contentTypeUTI:(id)arg2;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) NSString *packageLocator;
- (_Bool)isInPackage:(id)arg1;
@property(readonly, nonatomic) _Bool readOnly;
- (void)performIOChannelReadWithAccessor:(id /* block */)arg1;
- (void)performReadWithAccessor:(id /* block */)arg1;
- (unsigned long long)length;
- (id)applicationDataLocator;
- (id)AVAssetWithOptions:(id)arg1;
- (id)NSDataWithOptions:(unsigned long long)arg1;
- (struct CGImageSource *)newCGImageSource;
@property(readonly, nonatomic) unsigned long long encodedLength;
- (struct CGDataProvider *)newCGDataProvider;
- (id)bookmarkDataWithOptions:(unsigned long long)arg1;
- (id)filenameForPreferredFilename:(id)arg1;
@property(readonly, nonatomic) NSString *documentResourceLocator;
- (id)initWithDataRepresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) SFUCryptoKey *decryptionKey;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) _Bool needsDownload;
@property(readonly) Class superclass;

@end

