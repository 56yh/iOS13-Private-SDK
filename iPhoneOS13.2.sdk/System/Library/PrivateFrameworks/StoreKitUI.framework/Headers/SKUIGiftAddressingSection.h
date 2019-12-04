//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIGiftTableViewSection.h>

@class NSString, SKUIGift, SKUIGiftRecipientTableViewCell, SKUIGiftTextTableViewCell, UITextView;
@protocol UITextFieldDelegate;

__attribute__((visibility("hidden")))
@interface SKUIGiftAddressingSection : SKUIGiftTableViewSection
{
    double _footerHeight;
    NSString *_footerString;
    SKUIGift *_gift;
    UITextView *_messagingTextView;
    SKUIGiftRecipientTableViewCell *_recipientTableViewCell;
    id <UITextFieldDelegate> _textFieldDelegate;
    double _textViewCellHeight;
    SKUIGiftTextTableViewCell *_messageCell;
}

@property(retain, nonatomic) SKUIGiftTextTableViewCell *messageCell; // @synthesize messageCell=_messageCell;
@property(nonatomic) id <UITextFieldDelegate> textFieldDelegate; // @synthesize textFieldDelegate=_textFieldDelegate;
@property(retain, nonatomic) SKUIGift *gift; // @synthesize gift=_gift;
- (id)_textFieldTableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_recipientTableViewCell;
- (id)_footerString;
- (id)_attributedPlaceholderWithString:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (void)endEditingMessageForTableView:(id)arg1 indexPath:(id)arg2;
- (void)beginEditingMessageForTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithGiftConfiguration:(id)arg1;

@end

