//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKEdgeLocatable-Protocol.h>

@class NSString, PKDragIndicatorView;

@interface PKAccessoryView : UIView <PKEdgeLocatable>
{
    unsigned long long _edgeLocation;
    PKDragIndicatorView *_dragIndicatorView;
}

@property(retain, nonatomic) PKDragIndicatorView *dragIndicatorView; // @synthesize dragIndicatorView=_dragIndicatorView;
@property(nonatomic) unsigned long long edgeLocation; // @synthesize edgeLocation=_edgeLocation;
@property(nonatomic) _Bool showsDragIndicator;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

