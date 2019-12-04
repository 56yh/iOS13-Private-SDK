//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSDPathPainter-Protocol.h>
#import <iWorkImport/TSSPropertyValueArchiving-Protocol.h>

@class NSString;

@interface NSNull (TSCHArchivingUtilities) <TSDPathPainter, TSDMixing, TSSPropertyValueArchiving>
+ (id)instanceWithArchive:(const struct Message *)arg1 unarchiver:(id)arg2;
- (void)tsch_saveToProtobufString:(basic_string_23d93216 *)arg1;
-     // Error parsing type: v32@0:8^{ChartsNSNumberDoubleArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}d}16@24, name: tsch_saveToArchive:archiver:
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)saveToArchive:(struct Message *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Message *)arg1 unarchiver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end

