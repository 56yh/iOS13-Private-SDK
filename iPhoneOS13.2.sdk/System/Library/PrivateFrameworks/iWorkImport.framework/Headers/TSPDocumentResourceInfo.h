//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <iWorkImport/TSUCloudKitResourceInfo-Protocol.h>

@class NSSet, NSString, TSUColor;

__attribute__((visibility("hidden")))
@interface TSPDocumentResourceInfo : NSObject <NSCopying, TSUCloudKitResourceInfo>
{
    NSString *_digestString;
    NSString *_locator;
    NSString *_fileExtension;
    unsigned long long _fileSize;
    NSSet *_tags;
    TSUColor *_fallbackColor;
    struct CGSize _pixelSize;
}

@property(readonly, copy, nonatomic) TSUColor *fallbackColor; // @synthesize fallbackColor=_fallbackColor;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(readonly, copy, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(readonly, nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, copy, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(readonly, copy, nonatomic) NSString *locator; // @synthesize locator=_locator;
@property(readonly, copy, nonatomic) NSString *digestString; // @synthesize digestString=_digestString;
@property(readonly, nonatomic) NSSet *resourceTags;
@property(readonly, nonatomic) unsigned long long estimatedResourceSize;
@property(readonly, nonatomic) NSString *resourceIdentifier;
@property(readonly, nonatomic) NSString *recordName;
@property(readonly, nonatomic) NSString *recordType;
@property(readonly, nonatomic) NSString *assetFilename;
@property(readonly, nonatomic) long long assetFieldType;
@property(readonly, nonatomic) NSString *assetFieldName;
- (_Bool)isEqualToDocumentResourceInfo:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDigestString:(id)arg1 locator:(id)arg2 fileExtension:(id)arg3 fileSize:(unsigned long long)arg4 tags:(id)arg5 pixelSize:(struct CGSize)arg6 fallbackColor:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

