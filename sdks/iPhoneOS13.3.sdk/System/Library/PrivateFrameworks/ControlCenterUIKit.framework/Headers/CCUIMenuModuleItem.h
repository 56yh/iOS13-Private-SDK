//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CCUIMenuModuleItem : NSObject
{
    BOOL _busy;
    BOOL _selected;
    BOOL _placeholder;
    NSString *_identifier;
    NSString *_title;
    NSString *_subtitle;
    id /* CDUnknownBlockType */ _handler;
}

@property(nonatomic, getter=isPlaceholder) BOOL placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) id /* CDUnknownBlockType */ handler; // @synthesize handler=_handler;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isBusy) BOOL busy; // @synthesize busy=_busy;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (BOOL)performAction;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;

@end
