//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGLayout.h>

#import <PhotosUICore/PXGSolidColorSource-Protocol.h>

@class NSArray, NSString;

@interface PXGPPTAnimationLayout : PXGLayout <PXGSolidColorSource>
{
    CDStruct_d97c9657 _updateFlags;
    NSArray *_colors;
    unsigned int _numberOfRows;
    unsigned int _numberOfColumns;
    long long _style;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) unsigned int numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) unsigned int numberOfRows; // @synthesize numberOfRows=_numberOfRows;
- (struct UIColor *)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)referenceSizeDidChange;
@property(readonly, nonatomic) NSString *configurationDescription;
- (void)_updateContent;
- (void)update;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
