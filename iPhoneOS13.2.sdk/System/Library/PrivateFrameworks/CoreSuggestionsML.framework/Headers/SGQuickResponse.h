//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGQuickResponse : NSObject
{
    NSString *_text;
    NSString *_lang;
    unsigned long long _replyTextId;
    unsigned long long _styleGroupId;
    unsigned long long _semanticClassId;
    unsigned long long _modelId;
    unsigned long long _categoryId;
}

@property(readonly, nonatomic) unsigned long long categoryId; // @synthesize categoryId=_categoryId;
@property(readonly, nonatomic) unsigned long long modelId; // @synthesize modelId=_modelId;
@property(readonly, nonatomic) unsigned long long semanticClassId; // @synthesize semanticClassId=_semanticClassId;
@property(readonly, nonatomic) unsigned long long styleGroupId; // @synthesize styleGroupId=_styleGroupId;
@property(readonly, nonatomic) unsigned long long replyTextId; // @synthesize replyTextId=_replyTextId;
@property(readonly, copy, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)initWithText:(id)arg1 lang:(id)arg2 replyTextId:(unsigned long long)arg3 styleGroupId:(unsigned long long)arg4 semanticClassId:(unsigned long long)arg5 modelId:(unsigned long long)arg6 categoryId:(unsigned long long)arg7;

@end

