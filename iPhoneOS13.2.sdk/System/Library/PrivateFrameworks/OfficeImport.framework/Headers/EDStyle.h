//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDImmutableObject-Protocol.h>


@class EDAlignmentInfo, EDBorders, EDContentFormat, EDFill, EDFont, EDProtection, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDStyle : NSObject <NSCopying, EDImmutableObject>
{
    EDResources *mResources;
    unsigned long long mParentIndex;
    unsigned long long mContentFormatId;
    unsigned long long mFontIndex;
    unsigned long long mFillIndex;
    unsigned long long mAlignmentInfoIndex;
    unsigned long long mBordersIndex;
    EDProtection *mProtection;
    unsigned long long mIndex;
    _Bool mContentFormatOverridden;
    _Bool mContentFormatApplied;
    _Bool mFontOverridden;
    _Bool mFontApplied;
    _Bool mFillOverridden;
    _Bool mFillApplied;
    _Bool mAlignmentInfoOverridden;
    _Bool mAlignmentInfoApplied;
    _Bool mBordersOverridden;
    _Bool mBordersApplied;
    _Bool mProtectionOverridden;
    _Bool mProtectionApplied;
    _Bool mDoNotModify;
}

+ (id)styleWithResources:(id)arg1;
@property(getter=isProtectionApplied) _Bool protectionApplied; // @synthesize protectionApplied=mProtectionApplied;
@property(getter=isBordersApplied) _Bool bordersApplied; // @synthesize bordersApplied=mBordersApplied;
@property(getter=isAlignmentInfoApplied) _Bool alignmentInfoApplied; // @synthesize alignmentInfoApplied=mAlignmentInfoApplied;
@property(getter=isFillApplied) _Bool fillApplied; // @synthesize fillApplied=mFillApplied;
@property(getter=isFontApplied) _Bool fontApplied; // @synthesize fontApplied=mFontApplied;
@property(getter=isContentFormatApplied) _Bool contentFormatApplied; // @synthesize contentFormatApplied=mContentFormatApplied;
- (void)setDoNotModify:(_Bool)arg1;
- (unsigned long long)index;
- (void)setParent:(id)arg1;
- (id)parent;
@property(retain) EDProtection *protection;
@property(getter=isProtectionOverridden) _Bool protectionOverridden;
@property(retain) EDBorders *borders;
@property(getter=isBordersOverridden) _Bool bordersOverridden;
@property(retain) EDAlignmentInfo *alignmentInfo;
- (_Bool)isCenterAcrossAligned;
@property(getter=isAlignmentInfoOverridden) _Bool alignmentInfoOverridden;
@property(retain) EDFill *fill;
@property(getter=isFillOverridden) _Bool fillOverridden;
@property(retain) EDFont *font;
@property(getter=isFontOverridden) _Bool fontOverridden;
@property(retain) EDContentFormat *contentFormat;
@property(getter=isContentFormatOverridden) _Bool contentFormatOverridden;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToStyle:(id)arg1;
- (_Bool)isEquivalentToStyle:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResources:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)setAlignmentInfoIndex:(unsigned long long)arg1;
- (unsigned long long)alignmentInfoIndex;
- (void)setFillIndex:(unsigned long long)arg1;
- (unsigned long long)fillIndex;
- (void)setBordersIndex:(unsigned long long)arg1;
- (unsigned long long)bordersIndex;
- (void)setParentIndex:(unsigned long long)arg1;
- (unsigned long long)parentIndex;
- (void)setContentFormatId:(unsigned long long)arg1;
- (unsigned long long)contentFormatId;
- (void)setFontIndex:(unsigned long long)arg1;
- (unsigned long long)fontIndex;
- (void)setIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

