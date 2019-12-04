//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <AvatarUI/AVTDiscardableContent-Protocol.h>

@class AVTAttributeValueView, NSString, UIView;

@interface AVTAttributeCollectionViewCell : UICollectionViewCell <AVTDiscardableContent>
{
    id /* block */ discardableContentHandler;
    UIView *_attributeView;
}

+ (id)cellIdentifier;
@property(retain, nonatomic) UIView *attributeView; // @synthesize attributeView=_attributeView;
@property(copy, nonatomic) id /* block */ discardableContentHandler; // @synthesize discardableContentHandler;
- (void)discardContent;
- (void)prepareForReuse;
@property(readonly, nonatomic) AVTAttributeValueView *valueView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
