//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQUOutputBundle-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQUQuicklookOutputBundle : NSObject <GQUOutputBundle>
{
    struct __CFDictionary *mQuicklookProperties;
    struct __CFDictionary *mAttachments;
    struct __CFData *mMainHtmlData;
    struct __CFString *mUriScheme;
    struct __CFString *mUuidStr;
}

- (void)setPageElementXPath:(struct __CFString *)arg1 withThumbnailsOnLeft:(_Bool)arg2;
- (void)setDocumentSize:(struct CGSize)arg1;
- (_Bool)setData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 forNamedResource:(struct __CFString *)arg3;
- (_Bool)setDataForMainHtmlResource:(struct __CFData *)arg1;
- (struct __CFString *)createUriForResource:(struct __CFString *)arg1;
- (_Bool)giveOutputToPreviewRequest:(struct __QLPreviewRequest *)arg1;
- (struct __CFDictionary *)quicklookDictionary;
- (struct __CFData *)mainHtmlData;
- (void)dealloc;
- (id)initWithUriScheme:(struct __CFString *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

