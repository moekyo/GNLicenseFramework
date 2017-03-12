//
//  UCLicenseFrameworkManager.h
//  UCLicenseFramework
//
//  Created by moekyo on 2017/2/28.
//  Copyright © 2017年 moekyo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GNLicenseFrameworkManager : NSObject


/**
 RSA加密

 @param str 明文
 @param pubKey 公钥
 @return 密文
 */
+ (NSString *)encryptString:(NSString *)str publicKey:(NSString *)pubKey;

/**
 RSA解密

 @param str 密文
 @param privKey 私钥
 @return 明文
 */
+ (NSString *)decryptString:(NSString *)str privateKey:(NSString *)privKey;

/**
 通过用户名和设备标识计算序列号，并通过keychain保存

 @param service Bundle ID
 @param account 用户名
 @param goods_id 商品id
 @return 序列号
 */
+ (NSString *)getSerialNumberWithService:(NSString *)service account:(NSString *)account goods_id:(NSString *)goods_id;

/**
 通过序列号计算激活码

 @param number 序列号
 @return 激活码
 */
+ (NSString *)getActivationCodeWithSerialNumber:(NSString *)number;


/**
 通过激活码激活

 @param code 激活码
 @return 激活结果
 */
+ (BOOL)activateWithCode:(NSString *)code checkParameter:(NSString *)checkParameter;


@end
