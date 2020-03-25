//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PencilKit/_PKInkAttributesPickerViewDelegate-Protocol.h>

@class PKInk, _PKInkAttributesPickerView;
@protocol PKInkAttributesPickerDelegate;

@interface PKInkAttributesPicker : UIViewController <UIPopoverPresentationControllerDelegate, _PKInkAttributesPickerViewDelegate>
{
    id <PKInkAttributesPickerDelegate> _delegate;
    _PKInkAttributesPickerView *_pickerView;
}

@property(retain, nonatomic) _PKInkAttributesPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) id <PKInkAttributesPickerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_inkAttributesPickerViewUserDidEndDraggingSlider:(id)arg1;
- (void)_inkAttributesPickerViewUserDidStartDraggingSlider:(id)arg1;
- (void)inkAttributesPickerViewDidChangeInkOpacity:(id)arg1;
- (void)inkAttributesPickerViewDidChangeInkThickness:(id)arg1;
- (void)_notifyInkAttributesPickerDidChangeInk;
@property(nonatomic) NSUInteger displayMode;
- (void)setSelectedInk:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) PKInk *selectedInk;
@property(nonatomic) long long colorUserInterfaceStyle;
- (void)viewWillLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)initWithInk:(id)arg1;

@end
