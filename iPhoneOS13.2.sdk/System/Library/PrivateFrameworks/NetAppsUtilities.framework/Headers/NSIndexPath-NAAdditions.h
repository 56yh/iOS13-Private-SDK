//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSIndexPath (NAAdditions)
+ (id)na_indexPathForRow:(long long)arg1 inSection:(long long)arg2;
+ (id)na_indexPathForItem:(long long)arg1 inSection:(long long)arg2;
@property(readonly, nonatomic) long long na_item;
@property(readonly, nonatomic) long long na_row;
@property(readonly, nonatomic) long long na_section;
- (void)na_each:(id /* block */)arg1;
- (id)na_indexPathStartingAtPosition:(unsigned long long)arg1;
@end

