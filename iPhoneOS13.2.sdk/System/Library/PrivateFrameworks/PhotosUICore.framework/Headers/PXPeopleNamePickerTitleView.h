//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableArray, NSString, PHPerson, UIFont, UIImageView, UITextField;

@interface PXPeopleNamePickerTitleView : UIView <PXPhotoLibraryUIChangeObserver>
{
    UITextField *_nameField;
    NSString *_localizedName;
    UIFont *_nameFont;
    NSString *_placeholder;
    UIFont *_placeholderFont;
    NSMutableArray *_fetchResults;
    UIImageView *_avatarView;
    PHPerson *_person;
}

@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) NSMutableArray *fetchResults; // @synthesize fetchResults=_fetchResults;
@property(retain, nonatomic) UIFont *placeholderFont; // @synthesize placeholderFont=_placeholderFont;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UIFont *nameFont; // @synthesize nameFont=_nameFont;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) UITextField *nameField; // @synthesize nameField=_nameField;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)_updateFieldPlaceholder;
- (void)_updateFieldText;
- (void)resetImages;
- (void)finishEditing;
- (void)dealloc;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 person:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

