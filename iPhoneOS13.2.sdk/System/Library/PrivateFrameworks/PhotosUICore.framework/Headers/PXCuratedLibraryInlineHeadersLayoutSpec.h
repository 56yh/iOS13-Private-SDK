//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpec.h>

@interface PXCuratedLibraryInlineHeadersLayoutSpec : PXFeatureSpec
{
    unsigned long long _style;
    double _headerOffsetY;
    struct UIEdgeInsets _headerFloatMargins;
    struct UIEdgeInsets _headerContentMargins;
}

@property(readonly, nonatomic) double headerOffsetY; // @synthesize headerOffsetY=_headerOffsetY;
@property(readonly, nonatomic) struct UIEdgeInsets headerContentMargins; // @synthesize headerContentMargins=_headerContentMargins;
@property(readonly, nonatomic) struct UIEdgeInsets headerFloatMargins; // @synthesize headerFloatMargins=_headerFloatMargins;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;

@end

