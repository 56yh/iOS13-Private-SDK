//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

@interface WFActionDescriptionItem : NSObject
{
    NSString *_itemTitle;
    NSAttributedString *_itemDescription;
}

+ (id)itemWithTitle:(id)arg1 attributedDescription:(id)arg2;
+ (id)itemWithTitle:(id)arg1 description:(id)arg2;
@property(readonly, nonatomic) NSAttributedString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(readonly, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
// - (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 description:(id)arg2;

@end
