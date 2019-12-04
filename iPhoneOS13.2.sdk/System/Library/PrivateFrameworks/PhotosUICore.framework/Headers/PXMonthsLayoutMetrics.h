//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXMonthsLayoutMetrics : PXLayoutMetrics
{
    long long _sizeClass;
    long long _orientation;
    double _interitemSpacing;
    double _defaultSectionAspectRatio;
    double _chapterHeaderHeight;
    struct UIEdgeInsets _padding;
    struct UIEdgeInsets _chapterHeaderPadding;
}

@property(nonatomic) struct UIEdgeInsets chapterHeaderPadding; // @synthesize chapterHeaderPadding=_chapterHeaderPadding;
@property(nonatomic) double chapterHeaderHeight; // @synthesize chapterHeaderHeight=_chapterHeaderHeight;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double defaultSectionAspectRatio; // @synthesize defaultSectionAspectRatio=_defaultSectionAspectRatio;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long sizeClass; // @synthesize sizeClass=_sizeClass;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

