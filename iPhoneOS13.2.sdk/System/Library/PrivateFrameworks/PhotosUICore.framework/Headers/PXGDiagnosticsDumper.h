//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface PXGDiagnosticsDumper : NSObject
{
    NSURL *_url;
}

@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (struct CGImage *)newImageFromMTLTexture:(id)arg1;
- (id)dumpContentsForGridView:(id)arg1;
- (id)dumpContentsForAllGridViews;
- (id)initWithDumpURL:(id)arg1;

@end

