--------------------------------------------------------
--  Fichier créé - vendredi-mai-24-2024   
--------------------------------------------------------
--------------------------------------------------------
--  DDL for Table ACHAT
--------------------------------------------------------

  CREATE TABLE "YOUSSEF"."ACHAT" 
   (	"MAT_EQ" VARCHAR2(20 BYTE), 
	"CIN_M" NUMBER, 
	"NOM_EQ" VARCHAR2(20 BYTE), 
	"TYPE_EQ" VARCHAR2(20 BYTE), 
	"PRIX_EQ" VARCHAR2(20 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  Ref Constraints for Table ACHAT
--------------------------------------------------------

  ALTER TABLE "YOUSSEF"."ACHAT" ADD CONSTRAINT "FK_CIN_M" FOREIGN KEY ("CIN_M")
	  REFERENCES "YOUSSEF"."MEMBRE" ("CIN") ENABLE;
  ALTER TABLE "YOUSSEF"."ACHAT" ADD CONSTRAINT "FK_MAT_EQ" FOREIGN KEY ("MAT_EQ")
	  REFERENCES "YOUSSEF"."EQUIPEMENT" ("MAT") ENABLE;
