//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CCUIMenuModuleItem : NSObject
{
    _Bool _busy;
    _Bool _selected;
    _Bool _placeholder;
    NSString *_identifier;
    NSString *_title;
    NSString *_subtitle;
    id /* block */ _handler;
}

@property(nonatomic, getter=isPlaceholder) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) id /* block */ handler; // @synthesize handler=_handler;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isBusy) _Bool busy; // @synthesize busy=_busy;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)performAction;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 handler:(id /* block */)arg3;

@end

