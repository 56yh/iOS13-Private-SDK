//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQUOutputBundle-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQUFileOutputBundle : NSObject <GQUOutputBundle>
{
    struct __CFURL *mOutputUrl;
}

- (void)setPageElementXPath:(struct __CFString *)arg1 withThumbnailsOnLeft:(_Bool)arg2;
- (void)setDocumentSize:(struct CGSize)arg1;
- (_Bool)setData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 forNamedResource:(struct __CFString *)arg3;
- (_Bool)setDataForMainHtmlResource:(struct __CFData *)arg1;
- (struct __CFString *)createUriForResource:(struct __CFString *)arg1;
- (void)dealloc;
- (id)initWithOutputPath:(struct __CFString *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

